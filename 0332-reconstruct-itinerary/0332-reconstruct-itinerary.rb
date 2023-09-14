def find_itinerary(tickets)
  tickets = tickets.sort.reverse.group_by(&:first)
  route = []
  visit = -> airport {
    visit[tickets[airport].pop()[1]] while (tickets[airport] || []).any?
    route << airport
  }
  visit["JFK"]
  route.reverse
end